#include<stdio.h> 
#include<unistd.h>
#include<stdlib.h>
//#include<bits/stdc++.h>
 
int main() 
{ 
 
  int count,j,n,time,remain,flag=0,time_quantum; 
  
  int wait_time=0,turnaround_time=0,at[10],bt[10],rt[10]; 
  
  printf("Enter Total Number of Process:\t "); 
  
  scanf("%d",&n); 
  
  remain=n; 
  
  for(count=0;count<n;count++) 
  { 
    printf("Enter Arrival Time for Process, Process Number %d :",count+1); 
    
    scanf("%d",&at[count]); 
    printf("Enter Burst Time for Process, Process Number %d :",count+1);
    scanf("%d",&bt[count]); 
    
    rt[count]=bt[count]; 
    
  } 
  printf("Enter Time Quantum:\t"); 
  
  scanf("%d",&time_quantum); 
  
  printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n"); 
  
  for(time=0,count=0;remain!=0;) 
  
  {
   
    if(rt[count]<=time_quantum && rt[count]>0) 
    
    { 
    
      time+=rt[count]; 
      
      rt[count]=0; 
      
      flag=1; 
      
    } 
    else if(rt[count]>0) 
    { 
      rt[count]-=time_quantum; 
      time+=time_quantum; 
    } 
}
}
