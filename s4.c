#include <stdio.h>

void returnArray(const char *srcArray, size_t srcSize, char *dstArray, char dstSize)
{
  int i;
  for(i = 0; i < dst; ++i){
    dstArray[i] = srcArray[i];
  }
}

int main()
{
  char src[] = "what the fuck";
  char dst[sizeof src];

  returnArray(src, sizeof src, dst, sizeof dst);

  return 0;
}