#include<stdio.h> 
#include<unistd.h>
#include<stdlib.h>
#include<bits/stdc++.h>
 
int main() 
{ 
 
  int count,j,n,time,remain,flag=0,time_quantum; 
  
  int wait_time=0,turnaround_time=0,at[10],bt[10],rt[10],pr[10]; 
  
  printf("Enter Total Process:\t "); 
  
  scanf("%d",&n); 
  
  remain=n; 
    //int pr;
  for(count=0;count<n;count++) 
  { 
    printf("Enter Arrival Time for Process Number %d :",count+1); 
    
    scanf("%d",&at[count]); 
    printf("Enter Burst Time for Process Number %d:",count+1);
    scanf("%d",&bt[count]); 
    
    printf("Enter priority of process  %d :",count+1);
    
	scanf("%d",&pr[count]); 
    
    rt[count]=bt[count];
	
	//system(clear); 
    
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
    if(rt[count]==0 && flag==1) 
    { 
    int i;
      remain--; 
      printf("P[%d]\t|\t%d\t|\t%d\n",count+1,time-at[count],time-at[count]-bt[count]); 
      wait_time+=time-at[count]-bt[count]; 
      turnaround_time+=time-at[count]; 
      flag=0; 
      pr[i]=remain+i;
      i++;
    } 
    if(count==n-1) 
      count=0; 
    else if(at[count+1]<=time) 
      count++; 
    else 
      count=0; 
  } 
  printf("\nAverage Waiting Time= %f\n",wait_time*1.0/n); 
  printf("Avg Turnaround Time = %f",turnaround_time*1.0/n); 
  
  return 0; 
}
