#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node* next;
};
int n1,n2,i,j,temp;
struct node *root1=NULL,*root2=NULL;
void insert1();
void insert2();
void display1();
void display2();
void merge();
int main()
{
 printf("enter the limit for list1");
 scanf("%d",&n1);
 printf("\nenter the elements to the list1\n");
 for(i=0;i<n1;i++)
 {insert1();
 }
  display1();
  printf("\n");
 printf("enter the limit to the list2\n");
 scanf("%d",&n2);
 printf("enter the element to the list2\n");
 for(i=0;i<n2;i++)
   insert2();
 display2();

 printf("\n");
  merge();
 return 0;
}
void insert1()
{
  struct node *t,*p;
  t=(struct node *)malloc(sizeof(struct node));
  printf("enter the data");
  scanf("%d",&t->data);
  t->next=NULL;
  if(root1==NULL)
     root1=t;
  else
  {p=root1;
   while(p->next!=NULL)
     p=p->next;
   p->next=t;
  }
}
void insert2()
{
  struct node *t,*p;
  t=(struct node *)malloc(sizeof(struct node));
  printf("enter the data");
  scanf("%d",&t->data);
  t->next=NULL;
  if(root2==NULL)
     root2=t;
  else
  {p=root2;
   while(p->next!=NULL)
     p=p->next;
   p->next=t;
  }
}

void display2()
{
  struct node *t;
  t=root2;
  while(t!=NULL)
  {printf("%d ",t->data);
   t=t->next;
  }
}
void display1()
{
  struct node *t;
  t=root1;
  while(t!=NULL)
  {printf("%d ",t->data);
   t=t->next;
  }
}
void merge()
{
  struct node *t1,*t2;
  t1=root1;
  while(t1->next!=NULL)
    t1=t1->next;
  t1->next=root2;
  t1=root1;
  while(t1!=NULL)
  {t2=t1->next;
    while(t2!=NULL)
    {if(t1->data > t2->data)
      {temp=t1->data;
        t1->data=t2->data;
        t2->data=temp;
      }
      t2=t2->next;
    }
   t1=t1->next;
  }
  display1();
  printf("\n");
}
