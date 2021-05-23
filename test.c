/* Name: Dolly Sidar
   Roll_Number: 2019304 */


#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <errno.h>
#include <unistd.h>

int main()
{  
	pid_t pid; char file[50];
	printf("Enter PID: ");
	scanf("%d",&pid);
	printf("Enter File Name: ");
	scanf("%s", file); 
	long int status = syscall(548, pid, file); 
	if(status == 0) {
		printf("System Call 'sh_task_info' executed correctly.\n");
		printf("Use dmesg to check processInfo\n");
		}

	else 
	{
		printf("System call sh_task_info did not execute as expected\n");
		perror("Error ");
		printf("Error No.: %d\n", errno);
	}
	return 0;
}
