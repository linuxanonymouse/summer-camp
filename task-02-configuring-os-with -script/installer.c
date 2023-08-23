//copyrighted project if you find errors or bugs you can contact me on linuxnaonymouse@gmail.com
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void arch(){
	arcStart:
	char arc[10];
	printf("\t\t\tone last step plase select you department?\t\t\t\n");
	printf("\t 1.pentester/ethical hacker\n");
	printf("\t 2.developer(web)\n");
	printf("\t 3.reverse Enginer\n");
	printf("\t 4.social Enginer\n");
	printf("\t 5.developer(app)\n");
	printf("select>> ");
	fgets(arc,sizeof(arc),stdin);
		if(strncmp("1",arc,1) == 0){
			system("sudo -Syu update -y");
			system("sudo pacman -S nmap -y");
			system("sudo pacman -S nc -y");
			system("sudo pacman -S dirb -y");
			system("sudo pacman -S weevely -y");
			system("sudo pacman -S wireshark -y");
			system("sudo pacman -S sqlmap -y");
			system("sudo pacman -S sql -y");
			system("sudo pacman -S sqllite -y");
			system("sudo pacman -S crunch -y");
			system("sudo pacman -S aircrack-ng -y");
			system("sudo pacman -S wifite2 -y");
			system("sudo pacman -S macchanger -y");
			system("sudo pacman -S bettercap -y");
			system("sudo pacman -S proxychain4 -y");
			system("sudo pacman -S dirbuster -y");
			system("sudo pacman -S beff-xss -y");
			system("sudo pacman -S hashcat -y");
			system("sudo pacman -S hash-identifier");
			system("sudo pacman -S dmitry -y");
			system("sudo pacman -S john -y");
			system("sudo pacman -S hidra -y");
			system("sudo pacman -S defcon -y");
			system("sudo pacman -S waffw0ff -y");
			system("sudo pacman -S medusa -y");
			system("sudo pacman -S nikto -y");
			system("sudo pacman -S recon-ng -y");
			system("sudo pacman -S whatweb -y");
			system("sudo pacman -S theharvester -y");
			system("sudo pacman -S wfuzz -y");
			system("sudo pacman -S worldlists -y");
			system("sudo pacman -S tor -y");
			system("sudo pacman -S nano -y");
			system("sudo pacman -S vim -y");
			system("sudo pacman -S git -y");
			system("sudo pacman -S wget -y");
			system("sudo pacman -S curl -y");
			system("sudo pacman -S code -y");
			system("wget https://www.sublimetext.com/download_thanks?target=x64-deb");
			printf("\t\t\t you have finished your downlaod see you soon bye.\n");
			exit(0);
		}
		else if(strncmp("2",arc,1) == 0){
			system("sudo -Syu update -y");
			system("sudo pacman -S nodejs -y");
			system("sudo pacman -S npm -y");
			system("sudo pacman -S php -y");
			system("sudo pacman -S sql -y");
			system("sudo pacman -S sqllite -y");
			system("sudo pacman -S python -y");
			system("sudo pacman -S python3 -y");
			system("sudo pacman -S code -y");
			system("sudo pacman -S nano -y");
			system("sudo pacman -S vim -y");
			system("sudo pacman -S vi -y");
			system("sudo pacman -S git -y");
			system("sudo pacman -S curl -y");
			system("sudo pacman -S wget -y");
			system("sudo pacman -S notepad++ -y");
			system("sudo pacman -S nc -y");
			system("wget https://www.sublimetext.com/download_thanks?target=x64-deb");
			system("sudo pacman -S code -y");
			exit(0);
		}
		else if(strncmp("3",arc,1) == 0){
			system("sudo -Syu update -y");
			system("sudo pacman -S jdktools -y");
			system("sudo pacman -S ghidra -y");
			system("sudo pacman -S vertualbox -y");
			system("sudo pacman -S vim -y");
			system("sudo pacman -S nano -y");
			system("sudo pacman -S edb-debugger -y");
			system("sudo pacman -S apktool -y");
			system("sudo pacman -S dex2jar -y");
			system("sudo pacman -S javasnoop -y");
			system("sudo pacman -S JD-GUI -y");
			system("sudo pacman -S OllyDbg -y");
			system("sudo pacman -S smali -y");
			system("sudo pacman -S Valgrind -y");
			system("sudo pacman -S yara -y");
			system("wget https://www.sublimetext.com/download_thanks?target=x64-deb");
			exit(0);
		}
		else if(strncmp("4",arc,1) == 0){
			system("sudo -Syu update -y");
			system("sudo pacman -S git -y");
			system("sudo pacman -S wget -y");
			system("sudo pacman -S curl -y");
			system("git clone https://github.com/KasRoudra/PyPhisher.git ");
			system("sudo pacman -S king-phisher -y");
			system("git clone https://github.com/htr-tech/zphisher.git ");
			system("wget https://www.sublimetext.com/download_thanks?target=x64-deb");
			system("sudo pacman -S code -y");
			exit(0);
		}
		else if(strncmp("5",arc,1) == 0){
			system("sudo -Syu update -y");
			system("sudo pacman -S python -y");
			system("sudo pacman -S python3 -y");
			system("sudo pacman -S vi -y");
			system("sudo pacman -S nano -y");
			system("sudo pacman -S vim -y");
			system("sudo pacman -S code -y");
			system("wget https://www.sublimetext.com/download_thanks?target=x64-deb");
			system("sudo pacman -S gcc -y");
			system("sudo pacman -S i686-w64-mingw32-gcc -y");
			system("sudo pacman -S nc -y");
			system("sudo pacman -S nodejs -y");
			system("sudo pacman -S sql -y");
			system("sudo pacman -S sqllite -y");
			system("sudo pacman -S php -y");
			system("sudo pacman -S npm -y");
			system("sudo pacman -S i686-w64-mingw32-g++ -y");
			system("sudo pacman -S notepad++ -y");
			system("sudo pacman -S vpacman -y");
			exit(0);
		}
		else{
			printf("\t\t\t\a Unkown command try again!\n\n");
			goto arcStart;
		}
}
void debian(){
	debStart:
	char debD[10];
	printf("\t\t\tone last step plase select you department?\t\t\t\n");
	printf("\t 1.pentester/ethical hacker\n");
	printf("\t 2.developer(web)\n");
	printf("\t 3.reverse Enginer\n");
	printf("\t 4.social Enginer\n");
	printf("\t 5.developer(app)\n");
	printf("select>> ");
	fgets(debD,sizeof(debD),stdin);
		if(strncmp("1",debD,1) == 0){
			system("sudo apt-get update -y");
			system("sudo apt-get install nmap -y");
			system("sudo apt-get install nc -y");
			system("sudo apt-get install dirb -y");
			system("sudo apt-get install weevely -y");
			system("sudo apt-get install wireshark -y");
			system("sudo apt-get install sqlmap -y");
			system("sudo apt-get install sql -y");
			system("sudo apt-get install sqllite -y");
			system("sudo apt-get install crunch -y");
			system("sudo apt-get install aircrack-ng -y");
			system("sudo apt-get install wifite2 -y");
			system("sudo apt-get install macchanger -y");
			system("sudo apt-get install bettercap -y");
			system("sudo apt-get install proxychain4 -y");
			system("sudo apt-get install dirbuster -y");
			system("sudo apt-get install beff-xss -y");
			system("sudo apt-get install hashcat -y");
			system("sudo apt-get install hash-identifier");
			system("sudo apt-get install dmitry -y");
			system("sudo apt-get install john -y");
			system("sudo apt-get install hidra -y");
			system("sudo apt-get install defcon -y");
			system("sudo apt-get install waffw0ff -y");
			system("sudo apt-get install medusa -y");
			system("sudo apt-get install nikto -y");
			system("sudo apt-get install recon-ng -y");
			system("sudo apt-get install whatweb -y");
			system("sudo apt-get install theharvester -y");
			system("sudo apt-get install wfuzz -y");
			system("sudo apt-get install worldlists -y");
			system("sudo apt-get install tor -y");
			system("sudo apt-get install nano -y");
			system("sudo apt-get install vim -y");
			system("sudo apt-get install git -y");
			system("sudo apt-get install wget -y");
			system("sudo apt-get install curl -y");
			system("sudo apt-get install code -y");
			system("wget https://www.sublimetext.com/download_thanks?target=x64-deb");
			printf("\t\t\t you have finished your downlaod see you soon bye.\n");
			exit(0);
		}
		else if(strncmp("2",debD,1) == 0){
			system("sudo apt-get update -y");
			system("sudo apt-get install nodejs -y");
			system("sudo apt-get install npm -y");
			system("sudo apt-get install php -y");
			system("sudo apt-get install sql -y");
			system("sudo apt-get install sqllite -y");
			system("sudo apt-get install python -y");
			system("sudo apt-get install python3 -y");
			system("sudo apt-get install code -y");
			system("sudo apt-get install nano -y");
			system("sudo apt-get install vim -y");
			system("sudo apt-get install vi -y");
			system("sudo apt-get install git -y");
			system("sudo apt-get install curl -y");
			system("sudo apt-get install wget -y");
			system("sudo apt-get install notepad++ -y");
			system("sudo apt-get install nc -y");
			system("wget https://www.sublimetext.com/download_thanks?target=x64-deb");
			system("sudo apt-get install code -y");
			exit(0);
		}
		else if(strncmp("3",debD,1) == 0){
			system("sudo apt-get update -y");
			system("sudo apt-get install jdktools -y");
			system("sudo apt-get install ghidra -y");
			system("sudo apt-get install vertualbox -y");
			system("sudo apt-get install vim -y");
			system("sudo apt-get install nano -y");
			system("sudo apt-get install edb-debugger -y");
			system("sudo apt-get install apktool -y");
			system("sudo apt-get install dex2jar -y");
			system("sudo apt-get install javasnoop -y");
			system("sudo apt-get install JD-GUI -y");
			system("sudo apt-get install OllyDbg -y");
			system("sudo apt-get install smali -y");
			system("sudo apt-get install Valgrind -y");
			system("sudo apt-get install yara -y");
			system("wget https://www.sublimetext.com/download_thanks?target=x64-deb");
			exit(0);
		}
		else if(strncmp("4",debD,1) == 0){
			system("sudo apt-get update -y");
			system("sudo apt-get install git -y");
			system("sudo apt-get install wget -y");
			system("sudo apt-get install curl -y");
			system("git clone https://github.com/KasRoudra/PyPhisher.git ");
			system("sudo apt-get install king-phisher -y");
			system("git clone https://github.com/htr-tech/zphisher.git ");
			system("wget https://www.sublimetext.com/download_thanks?target=x64-deb");
			system("sudo apt-get install code -y");
			exit(0);
		}
		else if(strncmp("5",debD,1) == 0){
			system("sudo apt-get update -y");
			system("sudo apt-get install python -y");
			system("sudo apt-get install python3 -y");
			system("sudo apt-get install vi -y");
			system("sudo apt-get install nano -y");
			system("sudo apt-get install vim -y");
			system("sudo apt-get install code -y");
			system("wget https://www.sublimetext.com/download_thanks?target=x64-deb");
			system("sudo apt-get install gcc -y");
			system("sudo apt-get install i686-w64-mingw32-gcc -y");
			system("sudo apt-get install nc -y");
			system("sudo apt-get install nodejs -y");
			system("sudo apt-get install sql -y");
			system("sudo apt-get install sqllite -y");
			system("sudo apt-get install php -y");
			system("sudo apt-get install npm -y");
			system("sudo apt-get install i686-w64-mingw32-g++ -y");
			system("sudo apt-get install notepad++ -y");
			system("sudo apt-get install vertualbox -y");
			exit(0);
		}
		else{
			printf("\t\t\t\a Unkown command try again!\n\n");
			goto debStart;
		}
}
void rehat(){
	redStart:
	char redv[10];
	printf("\t\t\tone last step plase select you department?\t\t\t\n");
	printf("\t 1.pentester/ethical hacker\n");
	printf("\t 2.developer(web)\n");
	printf("\t 3.reverse Enginer\n");
	printf("\t 4.social Enginer\n");
	printf("\t 5.developer(app)\n");
	printf("select>> ");
	fgets(redv,sizeof(redv),stdin);
		if(strncmp("1",redv,1) == 0){
			system("sudo yum update -y");
			system("sudo yum install nmap -y");
			system("sudo yum install nc -y");
			system("sudo yum install dirb -y");
			system("sudo yum install weevely -y");
			system("sudo yum install wireshark -y");
			system("sudo yum install sqlmap -y");
			system("sudo yum install sql -y");
			system("sudo yum install sqllite -y");
			system("sudo yum install crunch -y");
			system("sudo yum install aircrack-ng -y");
			system("sudo yum install wifite2 -y");
			system("sudo yum install macchanger -y");
			system("sudo yum install bettercap -y");
			system("sudo yum install proxychain4 -y");
			system("sudo yum install dirbuster -y");
			system("sudo yum install beff-xss -y");
			system("sudo yum install hashcat -y");
			system("sudo yum install hash-identifier");
			system("sudo yum install dmitry -y");
			system("sudo yum install john -y");
			system("sudo yum install hidra -y");
			system("sudo yum install defcon -y");
			system("sudo yum install waffw0ff -y");
			system("sudo yum install medusa -y");
			system("sudo yum install nikto -y");
			system("sudo yum install recon-ng -y");
			system("sudo yum install whatweb -y");
			system("sudo yum install theharvester -y");
			system("sudo yum install wfuzz -y");
			system("sudo yum install worldlists -y");
			system("sudo yum install tor -y");
			system("sudo yum install nano -y");
			system("sudo yum install vim -y");
			system("sudo yum install git -y");
			system("sudo yum install wget -y");
			system("sudo yum install curl -y");
			system("sudo yum install code -y");
			system("wget https://www.sublimetext.com/download_thanks?target=x64-deb");
			printf("\t\t\t you have finished your downlaod see you soon bye.\n");
			exit(0);
		}
		else if(strncmp("2",redv,1) == 0){
			system("sudo yum update -y");
			system("sudo yum install nodejs -y");
			system("sudo yum install npm -y");
			system("sudo yum install php -y");
			system("sudo yum install sql -y");
			system("sudo yum install sqllite -y");
			system("sudo yum install python -y");
			system("sudo yum install python3 -y");
			system("sudo yum install code -y");
			system("sudo yum install nano -y");
			system("sudo yum install vim -y");
			system("sudo yum install vi -y");
			system("sudo yum install git -y");
			system("sudo yum install curl -y");
			system("sudo yum install wget -y");
			system("sudo yum install notepad++ -y");
			system("sudo yum install nc -y");
			system("wget https://www.sublimetext.com/download_thanks?target=x64-deb");
			system("sudo yum install code -y");
			exit(0);
		}
		else if(strncmp("3",redv,1) == 0){
			system("sudo yum update -y");
			system("sudo yum install jdktools -y");
			system("sudo yum install ghidra -y");
			system("sudo yum install vertualbox -y");
			system("sudo yum install vim -y");
			system("sudo yum install nano -y");
			system("sudo yum install edb-debugger -y");
			system("sudo yum install apktool -y");
			system("sudo yum install dex2jar -y");
			system("sudo yum install javasnoop -y");
			system("sudo yum install JD-GUI -y");
			system("sudo yum install OllyDbg -y");
			system("sudo yum install smali -y");
			system("sudo yum install Valgrind -y");
			system("sudo yum install yara -y");
			system("wget https://www.sublimetext.com/download_thanks?target=x64-deb");
			exit(0);
		}
		else if(strncmp("4",redv,1) == 0){
			system("sudo yum update -y");
			system("sudo yum install git -y");
			system("sudo yum install wget -y");
			system("sudo yum install curl -y");
			system("git clone https://github.com/KasRoudra/PyPhisher.git ");
			system("sudo yum install king-phisher -y");
			system("git clone https://github.com/htr-tech/zphisher.git ");
			system("wget https://www.sublimetext.com/download_thanks?target=x64-deb");
			system("sudo yum install code -y");
			exit(0);
		}
		else if(strncmp("5",redv,1) == 0){
			system("sudo yum update -y");
			system("sudo yum install python -y");
			system("sudo yum install python3 -y");
			system("sudo yum install vi -y");
			system("sudo yum install nano -y");
			system("sudo yum install vim -y");
			system("sudo yum install code -y");
			system("wget https://www.sublimetext.com/download_thanks?target=x64-deb");
			system("sudo yum install gcc -y");
			system("sudo yum install i686-w64-mingw32-gcc -y");
			system("sudo yum install nc -y");
			system("sudo yum install nodejs -y");
			system("sudo yum install sql -y");
			system("sudo yum install sqllite -y");
			system("sudo yum install php -y");
			system("sudo yum install npm -y");
			system("sudo yum install i686-w64-mingw32-g++ -y");
			system("sudo yum install notepad++ -y");
			system("sudo yum install vertualbox -y");
			exit(0);
		}
		else{
			printf("\t\t\t\a Unkown command try again!\n\n");
			goto redStart;
		}
}

int main(){
	start:
	char distro[10];
	bzero(distro,sizeof(distro));
	printf("\t\t\t Wellcome starting, tool installer. \t\t\t\n");
	printf("\t\t\t select your linux distro?\n");
	printf("\t 1,debian based os.\n");
	printf("\t 2.arch based os.\n");
	printf("\t 3.redhat based os.\n");
	printf("\t 4.gentoo based os.\n");
	printf("\n sorry for the limited os listed this list will be updated soon so plase wait for the update.\n");
	printf("select>> ");
	fgets(distro,sizeof(distro),stdin);
	if(strncmp("1",distro,1) ==0){
		debian();
	}
	else if(strncmp("2",distro,1) == 0){
		arch();
	}
	else if(strncmp("3",distro,1) == 0){
		rehat();
	}
	else if(strncmp("4",distro,1) == 0){
		printf("\n\t\t\t sorry! this distro list is on development plase try again in the futer, have nice day.\n");
		sleep(1);
		goto start;
	}
	else{
		printf("\t\t\t\a Unkown command try again!\n\n");
		goto start;
	}

	return 0;
}