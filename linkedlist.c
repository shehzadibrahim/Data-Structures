#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 struct node 

{
  
    /* data */ 
  int INFO;
   
struct node *NEXT;
 

};

 
struct node *FIRST = NULL;

struct node *LAST = NULL;

 
void insert (int);

int delete (int);

void print (void);

struct node *search (int);

 
 
void
main () 
 
{
  
 
int num1, num2, choice;
  
struct node *location;
  
 
while (1)
    
    {
      
	/* code */ 
	
      
printf("\n\n\t\n\nselect an option");
      
printf("\n\t\n1.insert");
      
printf("\n\t\n2.delete");
      
printf("\n\t\n3.search");
      
printf("\n\t\n4.print");
      
printf("\n\t\n5.exit");
      
 
 
 
 
 
 
printf("\n\n\n\t\n\nEnter your choice");
      
scanf ("%d", &choice);
      
 
switch (choice)
	
	{
	
case 1:
	  
	    /* code */ 
	    printf("\n\n\n\tEnter the element to be inserted");
	  
scanf ("%d", &num1);
	  
insert (num1);
	  
printf("\n\n\n\tsuccessfully inserted %d to the list", num1);
	  
getch ();
	  
break;
	
 
 
case 2:
	  
printf("\n\n\n\tenter element to be deleted");
	  
scanf ("%d", &num1);
	  
num2 = delete (num1);
	  
if (num2 == -9999)
	    
printf("\n\n\n\t%d is not present in the list", num1);
	  
	  else
	    
printf("\n\n\n\telement %d is deleted from the list ", num2);
	  
getch ();
	  
break;
	
 
 
case 3:
	  
printf("\n\n\n\tenter the element to search");
	  
scanf ("%d", &num1);
	  
location = search (num1);
	  
 
if (location == NULL)
	    
printf("\n\n\n\t%d is not present", num1);
	  
	  else
	    {
	      
if (location == LAST)
		
printf("\n\n\n\tElement is the last element of the list");
	      
	      else
		
printf
		  ("element %d is present before element %d in the linked list",
		   num1, (location->NEXT)->INFO);
	    
}
	  
getch ();
	  
break;
	
 
 
case 4:
	  
	  {
	    
print ();
	    
getch ();
	    
break;
	  
 
}
	
 
case 5:
	  
	  {
	    
exit (1);
	    
break;
	  
 
}
	
 
default:
	  
	  {
	    
printf("\n\n\n\tincorrect choice");
	    
getch ();
	    
 
 
 
break;
	  
}
	}
    }

 
}


 
 
 
 
 
 
 
//functions
  
void
insert (int value) 
{
  
struct node *PTR = (struct node *) malloc (sizeof (struct node));
  
 
PTR->INFO = value;
  
 
if (FIRST == NULL)
    {
      
FIRST = LAST = PTR;
      
PTR->NEXT = NULL;
    
 
 
 
 
}
  
  else
    {
      
LAST->NEXT = PTR;
      
PTR->NEXT = NULL;
      
LAST = PTR;
    
 
}

 
}


 
 
int
delete (int value)
{
  
struct node *LOC, *TEMP;
  
 
int i;
  
i = value;
  
 
LOC = search (i);
  
if (LOC == NULL)
    
return (-9999);
  
 
if (LOC == FIRST)
    {
      
if (FIRST == LAST)
	{
	  
FIRST = LAST = NULL;
	
}
      
      else
	{
	  
 
FIRST = FIRST->NEXT;
	
 
}
      
 
return (value);
    
 
}
  
 
for (TEMP = FIRST; TEMP->NEXT != LOC; TEMP = TEMP->NEXT);
  
if (LOC == LAST)
    {
      
LAST = TEMP;
      
return (LOC->INFO);
    
}}
  
 
 
struct node *search (int value) 
  {
    
 
struct node *PTR;
    
if (FIRST == NULL)
      {
	
 
return NULL;
      }
    
if (FIRST == LAST && FIRST->INFO == value)
      {
	
return (FIRST);
      
}
    
 
for (PTR = FIRST; PTR != LAST; PTR = PTR->NEXT)
      {
	
if (PTR->INFO == value)
	  {
	    
return (PTR);
	  
 
}
	
 
if (LAST->INFO == value)
	  {
	    
return (LAST);
	  }
	
	else
	  {
	    
return (NULL);
	  
}
      
}
  
 
 
}
  
 
 
 
 
 
void print ()
  {
    
struct node *PTR;
    
 
if (FIRST == NULL)
      {
	
printf("\n\n\n\tEMPTY LIST");
	
return;
      
}
    
 
printf("\n\n\n\tlinked list elements");
    
if (FIRST == LAST)
      {
	
printf("\n\n\n\t%d", FIRST->INFO);
	
return;
      
}
    
for (PTR = FIRST; PTR != LAST; PTR = PTR->NEXT)
      {
	
printf("\n\n\n\t%d", PTR->INFO);
	
printf("\n\n\n\t%d", LAST->INFO);
      }
  
 
}
