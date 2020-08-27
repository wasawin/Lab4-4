#include <stdio.h>

int main(void) {
  int per;
  float l1,l2,area,Suml,Height;
  // รับค่า
  printf("Enter L1\n");
  scanf("%f",&l1);
  printf("Enter L2\n");
  scanf("%f",&l2);
  printf("Enter Height\n");
  scanf("%f",&Height);

  // เปอร์เซ็น ระหว่าง l1 l2
    per=(l2-l1)/l1*100;
    printf("L2 > L1= %d % \n",per);
  
    if (per>40){

      Suml= l1+l2;
      area = 0.5*Height*Suml;
      printf("Area is : %0.3f \n", area);
    }
     // หากน้อยกว่า 40%
    else 
    printf("Stop calculate because \nL2 < 40 percent of L1 \n");
  return 0;
}