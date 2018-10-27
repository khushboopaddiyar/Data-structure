#include<stdio.h>
#include<stdlib.h>
#define N 10
int a[N] , f=-1,r=-1;
void enqueue();
void dequeue();
void traversal();
int main()
{
int c;
  while(1)
  {
   printf("\nEnter ur choices : \n 1.Insert \n 2.Delete \n 3.Traversal \n 4.exit");
   scanf("%d",&c);
     switch(c)
     {
      case 1: enqueue();
               break;
      case 2: dequeue();
               break;
       case 3:traversal();
                break;
       case 4:exit(0); 
     }
  }
}
  
void enqueue()
{
 if(r==N-1)
  {
   printf("\nOverflow");
   f++;
    r++;
  }
  else{
      int e;
      printf("\nenter a no");
      scanf("%d",&e);
      a[r]=e;
      r++;
      }

}
void dequeue()
{
  if(f==-1&& r==-1)
  {
   printf("\nunderflow");
 
  }
  else
  {
   printf("\nThe deleted element is %d",a[f]);
   f++;
  }
}
 void traversal()
 {
  if(r==-1 && f==-1)
 {
  printf("\nunderflow");
 }
 else
 {
 int i;
  for(i=f;i<r ;i++)
  {
  printf("\n The elements are %d",a[i]);
  }
 }

}





