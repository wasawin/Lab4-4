#include <stdio.h>

int main(void) {
  int per;
  float l1,l2,area,Suml,Height,perl1,perl2;
  // รับค่า
  printf("Enter L1\n");
  scanf("%f",&l1);
  printf("Enter L2\n");
  scanf("%f",&l2);
  printf("Enter Height\n");
  scanf("%f",&Height);
  // หา40เปอร์เซ็น ของค่า l1 l2
  perl1= (40*l1)/100;
  perl2= (40*l2)/100;
 
  per=(l1/l2)*100;
  printf("L2 > L1= %d % \n",per);
  Suml= l1+l2;
  if (perl2>perl1){
    area = 0.5*Height*Suml;
    printf("Area is : %0.3f", area);
  }
  return 0;
}