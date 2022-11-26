#include <stdio.h>

int compArr();
void splitArr();
void shffelArr();

char MArr[26], SArr[26];
char LArr[13], RArr[13];

int main()
{
  // initialisation
  // Marr A-Z

  int i;

  for (i = 0; i < 26; i++)
  {
    MArr[i] = 'A' + i;
    SArr[i] = 'A' + i;
  }

  MArr[i] = '\0'; // null terminate the array
  SArr[i] = '\0';

  int COUNT = 0;
  int TF = 0;
  // while Loop

  while (TF == 0)
  {
    splitArr();
    shffelArr();
    TF = compArr();
    COUNT++;
    printf("Shuffle %2d: %s\n", COUNT, SArr);
  }
  printf("It took a total of %d shuffles to restore the deck.\n",
         COUNT);
  printf("%d",COUNT);

  return (0);
}

// FUNK area

int compArr()
{
  int j = 0;
  while (SArr[j] == MArr[j] && j < 26)
  {
    j++;
  }
  if (j == 26)
    return (1);
  else
  {
    return (0);
  }
}
void splitArr()
{
  int l;
  for (l = 0; l < 13; l++)
  {
    LArr[l] = SArr[l];
    RArr[l] = SArr[l + 13];
  }
}
void shffelArr()
{
  int s, s1;
  for (s = 0; s < 26; s += 2)
  {
    s1 = s / 2;
    SArr[s] = LArr[s1];

    SArr[s + 1] = RArr[s1];
  }
}