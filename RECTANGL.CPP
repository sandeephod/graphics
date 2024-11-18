#include<conio.h>
#include<graphics.h>
 void main(){
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C://TURBOC3//BGI");
  //
  //top
  for(int i=25;i<=150;i++){
   putpixel(i,25,RED);
  }
  //left
  for(int j=25;j<=200;j++){
   putpixel(25,j,RED);
  }
  //bottom
  for(int k=25;k<=150;k++){
   putpixel(k,200,RED);
  }
  //right
  for(int r=25;r<=200;r++){
  putpixel(150,r,RED);
  }
  //
  getch();
  closegraph();


 }