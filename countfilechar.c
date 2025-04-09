/* Author :Maria
   Date :9/4/2025
   Description :WAP to read a file and count the number of words, number os lines and the number of characters in it*/
  #include<stdio.h>
  int main(){
	FILE *fp;
	fp=fopen("countcharfile.txt","r");
	char ch;
	int charcount=0;
	int linecount=0;
	int wordscount=0;
	while(fscanf(fp,"%c",&ch)==1){
		if(ch==' '|| ch=='.'){
			wordscount++;
		}
		if(ch=='.'){
			linecount++;
		}
		if(ch!=' '&& ch!='.'&& ch!='\n'){
			charcount++;
		}
	}
		
	printf("\nWord Count=%d",wordscount);
	printf("\nLine Count=%d",linecount);
	printf("\nChar Count=%d",charcount);
	fclose(fp);	    	
	return 0;
}
	
