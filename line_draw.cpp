#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void main()
{

int x1,x2,y1,y2,ax,ay,len,delx,dely,i,sdelx,sdely,p,o;

 int gm,gd=DETECT;
   initgraph(&gd,&gm,"C:\\TC\\BGI");




  printf("Enter the co-ordinates:\n");
  scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
       p=x2-x1;
       o=y2-y1;
  if(abs(p)>abs(o))
  { len=abs(p);}
  else
  { len=abs(o);}

     delx=(x2-x1)/len;
     dely=(y2-y1)/len;

     if(delx>0)
     {sdelx=1;}
     else
     {sdelx=-1;}


      if(dely>0)
     {sdely=1;}
     else
     {sdely=-1;}


     ax=x1+0.5*sdelx;
     ay=x1+0.5*sdely;

     while(i<=len)
     {
      putpixel(ax,ay,RED);
      ax=ax+delx;
      ay=ay+dely;
      i++;
      }
      getch();
      closegraph();
      }
