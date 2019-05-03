#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

#define NUID 1000
#define NGID 1000

int main(int argc, char ** argv){
	
	uid_t cur_uid = getuid();	

	printf("CS329_PERM: The current user ID is %d\n", cur_uid);

	if(cur_uid == 0) //check if we are running as root
	{
		setgid(NGID); //change the gid and uid
		setuid(NUID);
	}
		
	cur_uid = getuid();	
	printf("CS329_PERM: The current user ID is %d\n", cur_uid);

	return 1;
}


