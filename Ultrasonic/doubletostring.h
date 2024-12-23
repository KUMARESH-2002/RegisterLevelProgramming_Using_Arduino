void doubleToString(double value, char *str) 
{
  int intPart = (int)value;
  double fractionalPart = value - intPart;
  int i = 0;
  if (intPart == 0) 
  {
    str[i++] = '0';
  } 
  else
  {
    int temp = intPart;
    int digits[10];
    int j = 0;
    while (temp > 0)
    {
      digits[j++] = temp % 10;
      temp /= 10;
    }
    for (int k = j - 1; k >= 0; k--)
    {
      str[i++] = digits[k] + '0';
    }
 }
 str[i++] = '.';
 int decimalPlaces = 2;
 for (int j = 0; j < decimalPlaces; j++) 
 {
  fractionalPart *= 10;
  int fracDigit = (int)fractionalPart;
  str[i++] = fracDigit + '0';
  fractionalPart -= fracDigit;
  }
  str[i] = '\0';
}
