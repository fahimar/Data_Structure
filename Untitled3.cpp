#include <stdio.h>
int main()
{
    int a[10]={2,4,6,7,9,12,14,18,19,21};
    int s,e,m,sear,n=10,com=0;
     printf("Enter value to find:");
     scanf("%d", &sear);
      s = 0;
  e = n - 1;
  m = (s+e)/2;

  while (s <= e) {
        com++;
    if (a[m] < sear)
     s = m + 1;
    else if (a[m] == sear) {
      printf("%d found at index %d. Comparison=%d\n", sear, m,com);
      break;
    }
    else
     e = m - 1;

    m = (s + e)/2;
  }
  if (s > e)
    printf("Not found and comparison=%d",com);
    return 0;
}
