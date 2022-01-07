#include <stdio.h>
#include <stdlib.h>

struct Array
{
  int *arr;
  int length;
  int capacity;
};

void PrintArray(struct Array Arr)
{
  int i;
  for (i = 0; i < Arr.capacity; i++)
    printf("%d ", Arr.arr[i]);

  printf("\n");
}

void Append(struct Array *Arr, int value)
{
  if (Arr->length == Arr->capacity)
    return;
  else
    Arr->arr[Arr->length++] = value;
}

void Delete(struct Array *Arr, int pos)
{
  if (Arr->length == 0 || pos < 0 || pos >= Arr->length)
    return;

  int i;
  for (i = pos; i < Arr->length; i++)
    Arr->arr[i] = Arr->arr[i + 1];

  Arr->arr[i] = 0;
  Arr->length--;
}

void Insert(struct Array *Arr, int pos, int value)
{
  // there is no room for new item
  // validity of the postition
  if (pos < 0 || Arr->length == Arr->capacity)
    return;
  else if (pos >= Arr->length)
    Arr->arr[Arr->length++] = value;
  else
  {
    int i;
    for (i = Arr->length; i != pos; i--)
    {
      Arr->arr[i] = Arr->arr[i - 1];
    }
    Arr->arr[i] = value;
    Arr->length++;
  }
}

int Max(struct Array Arr)
{
  if (Arr.length == 0)
    return 0;

  int max = Arr.arr[0];
  int i;
  for (i = 1; i < Arr.length; i++)
  {
    if (max < Arr.arr[i])
      max = Arr.arr[i];
  }
  return max;
}

int Min(struct Array Arr)
{
  if (Arr.length == 0)
    return 0;

  int min = Arr.arr[0];
  int i;
  for (i = 1; i < Arr.length; i++)
  {
    if (min > Arr.arr[i])
      min = Arr.arr[i];
  }
  return min;
}

int Sum(struct Array Arr)
{
  int sum = 0;
  int i;
  for (i = 0; i < Arr.length; i++)
    sum += Arr.arr[i];
  return sum;
}

float Avg(struct Array Arr)
{
  return (float)Sum(Arr) / Arr.length;
}

int Search(struct Array Arr, int value)
{
  int i;
  for (i = 0; i < Arr.length; i++)
  {
    if (Arr.arr[i] == value)
      return i;
  }
  return -1;
}

int BSearch(struct Array Arr, int value)
{
  int l, h, mid;
  l = 0;
  h = Arr.length;

  while (l <= h)
  {
    mid = (l + h) / 2;
    if (value == Arr.arr[mid])
      return mid;
    else if (value > Arr.arr[mid])
      l = mid + 1;
    else
      h = mid - 1;
  }
  return -1;
}

int BSearchR(struct Array Arr, int l, int h, int value) {

  if (l > h) return -1;

  int mid = (l+h)/2;
  if (value == Arr.arr[mid]) return mid;
  else if (value > Arr.arr[mid]) return BSearchR(Arr, mid + 1, h, value);
  else return BSearchR(Arr, l, mid - 1, value);
}

int main()
{
  int size = 10;
  struct Array Arr;

  Arr.arr = (int *)malloc(sizeof(int) * size);
  Arr.length = 0;
  Arr.capacity = size;

  Append(&Arr, 10);
  Append(&Arr, 15);
  Append(&Arr, 13);
  Append(&Arr, 2);
  Append(&Arr, 4);
  Append(&Arr, 5);

  struct Array Arr2;

  Arr2.arr = (int *)malloc(sizeof(int) * size);
  Arr2.length = 0;
  Arr2.capacity = size;

  Append(&Arr2, 2);
  Append(&Arr2, 4);
  Append(&Arr2, 6);
  Append(&Arr2, 12);
  Append(&Arr2, 14);
  Append(&Arr2, 15);
  Append(&Arr2, 17);
  Append(&Arr2, 19);
  Append(&Arr2, 21);

  PrintArray(Arr);

  Insert(&Arr, 2, 10);

  PrintArray(Arr);

  Insert(&Arr, 0, 1);

  PrintArray(Arr);

  Delete(&Arr, 1);

  PrintArray(Arr);

  printf("Max is %d\n", Max(Arr));

  PrintArray(Arr);

  printf("13 is found at %d\n", Search(Arr, 13));

  printf("Sum of the array is %d\n", Sum(Arr));

  printf("Avg of the array is %f\n", Avg(Arr));


  PrintArray(Arr2);

  printf("2 is found at %d\n", BSearch(Arr2, 2));
  printf("4 is found at %d\n", BSearch(Arr2, 4));
  printf("6 is found at %d\n", BSearch(Arr2, 6));
  printf("12 is found at %d\n", BSearch(Arr2, 12));
  printf("15 is found at %d\n", BSearch(Arr2, 15));
  printf("16 is found at %d\n", BSearch(Arr2, 16));
  printf("17 is found at %d\n", BSearch(Arr2, 17));
  printf("19 is found at %d\n", BSearch(Arr2, 19));
  printf("21 is found at %d\n", BSearch(Arr2, 21));

  printf("\n\n");

  printf("2 is found at %d\n", BSearchR(Arr2, 0, Arr2.length, 2));
  printf("4 is found at %d\n", BSearchR(Arr2, 0, Arr2.length, 4));
  printf("6 is found at %d\n", BSearchR(Arr2, 0, Arr2.length, 6));
  printf("12 is found at %d\n", BSearchR(Arr2, 0, Arr2.length, 12));
  printf("15 is found at %d\n", BSearchR(Arr2, 0, Arr2.length, 15));
  printf("16 is found at %d\n", BSearchR(Arr2, 0, Arr2.length, 16));
  printf("17 is found at %d\n", BSearchR(Arr2, 0, Arr2.length, 17));
  printf("19 is found at %d\n", BSearchR(Arr2, 0, Arr2.length, 19));
  printf("21 is found at %d\n", BSearchR(Arr2, 0, Arr2.length, 21));  
   
}