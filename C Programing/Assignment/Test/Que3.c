//Develop a program to manage a music library. Define a structure to
//store song details (song ID, title, artist, and duration). Create a menu-
//driven program to add new songs and display the song library. Use
//functions to handle these operations.

#include<stdio.h>
struct Song {
	int id;
	char title[30];
	char artist[30];
	double duration;
};

struct Song s[100];
int count = 0;

void addSong() {
	printf("\nEnter Song ID: ");
	scanf("%d",&s[count].id);

	printf("Enter Title: ");
	scanf(" %[^\n]",s[count].title);

	printf("Enter Artist: ");
	scanf(" %[^\n]",s[count].artist);

	printf("Enter Duration: ");
	scanf("%lf",&s[count].duration);

	count++;
}
void displaySongs() {
	printf("\n--- Song Library ---\n");
	for(int i=0; i<count; i++) {
		printf("\n id: %d",s[i].id);
		printf("\n title: %s",s[i].title);
		printf("\n artist: %s",s[i].artist);
		printf("\n duration: %.lf\n",s[i].duration);
	}
}
void main() {
	int choice;
	while(choice!=3) {
		printf("\n1.addsong");
		printf("\n2.display song");
		printf("\n3.exit");
		printf("\n enter choice: ");
		scanf("%d",&choice);

		switch(choice) {
			case 1:
				addSong();
				break;

			case 2:
				displaySongs();
				break;

			case 3:
				printf("exit");
				break;
			default:
				printf("invalid input choose 1 for add and 2 for display:");
		}
	}
}