#include <stdio.h>
#include <stdlib.h>

int GetLevelCurrentSpeed(int speed);

int main()
{
  int lesmNumber;
  int currentSpeed;
  int mostQuickLevel;

  lesmNumber = currentSpeed = 0;
  mostQuickLevel = -1;

  scanf("%i", &lesmNumber);

  while (!feof(stdin))
  {
    for (int i = 0; i < lesmNumber; i++)
    {
      scanf("%i", &currentSpeed);

      int currentSpeedLevel = GetLevelCurrentSpeed(currentSpeed);

      if (currentSpeedLevel > mostQuickLevel)
        mostQuickLevel = currentSpeedLevel;
    }

    printf("%i\n", mostQuickLevel);

    mostQuickLevel = -1;
    scanf("%i", &lesmNumber);
  }
}

int GetLevelCurrentSpeed(int speed)
{
  if (speed < 10)
    return 1;
  else if (speed >= 10 && speed < 20)
    return 2;
  else
    return 3;
}
