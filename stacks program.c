#include<stdio.h>
#include<stdlib.h>
// Declare a dynamic integer array 'a' to store stack elements
int *a;
// Initialize maximum size and top index
int max,top=-1;
// Function to push an element onto the stack
void push(int ele)
{
	// Check for stack overflow
	if(top==max-1)
	{
		// Double the stack size
		max=2*max;
    	printf("stack overflow so stack is resized and element is pushed\n");
    	// Reallocate memory for the expanded stack
		a=realloc(a,max*sizeof(int)); 		
	}
	    // Push the element onto the stack
		a[++top]=ele;
}
// Function to pop an element from the stack
int pop()
{
	// Check for stack underflow
	if(top==-1)
	{
		printf("stack underflow");
		return -999;// Return a special value to indicate underflow
	}
	else
	{
		// Pop the top element
		return(a[top--]);
	}	
}
// Function to display the contents of the stack
void display()
{
	int i;
	if(top==-1)
		printf("stack is empty");
	else
	{
		printf("stack elements are:");
		for(i=top;i>=0;i--)
			printf("%d\t",a[i]);
	}
}

int main()
{
	int choice,ele;
	printf("enter the value of max:");
	scanf("%d",&max);
	// Allocate memory for the stack
	a=(int *)malloc(max*sizeof(int));
	while(1)
	{
	printf("\nenter your choice\n ");
	printf("1 for push\n 2 for pop\n 3 for display\n  4 for exit\n");
   	scanf("%d",&choice);
   	switch(choice)
   	{
   		case 1: printf("enter the element to be pushed:");
   		        scanf("%d",&ele);
   		        push(ele);
   		        break;
   		case 2:	ele=pop();
   				if(ele!=-999)
   				 printf("deleted element is %d\n",ele);
   				break;
   		case 3:	display();
   				break;
   		case 4:	free(a); // Deallocate memory
		   		exit(0);
   		default:printf("invalid choice");
   	}
   }
}
