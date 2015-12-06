#include <stdio.h>

void returnArray(const char *srcArray, size_t srcSize, char *dstArray, char dstSize)
{
  // printf("*dstArray = %s, dstSize = %zd\n", dstArray, dstSize);
  int i;
  for(i = 0; i < dstSize; ++i){
    dstArray[i] = srcArray[i];
  }
  // printf("*dstArray = %s, dstSize = %zd\n", dstArray, dstSize);
}

void returnArray2(const char srcArray[], size_t srcSize, char dstArray[], char dstSize)
{
  int i;
  for(i = 0; i < dstSize; ++i){
    dstArray[i] = srcArray[i];
  }
  dstArray[0] = '>';
}

int main()
{
  char src[] = "what the fuck";
  char dst[sizeof(src)];

  // returnArray(src, sizeof(src), dst, sizeof(dst));
  returnArray2(src, sizeof(src), dst, sizeof(dst));
  printf("dst[] = %s\n", dst);

  return 0;
}