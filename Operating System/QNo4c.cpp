#include <iostream>
#include <unistd.h>
using namespace std;
class QNO4c
{
	public:
	void diffProgram()
	{
  		pid_t pidFork;
  		pidFork = fork();
  		if(pidFork < 0)
	  	{
			cout << "\nError in fork...";
		}
		else if(pidFork == 0)
		{
		    execlp("/bin/ls", "ls\n", NULL);
		}
		else
		{
			execlp("/usr/bin/cal", "cal\n", NULL);
		}
		return;
	}
};
int main()
{
	QNO4c c;
  	c.diffProgram();
}
