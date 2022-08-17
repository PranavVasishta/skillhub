//heaviest
void main()
{
	int a,b,c,heavy;
	printf("enter the weight of the persons a b c\n");
	scanf("%d %d %d",&a,&b,&c);
	heavy=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("heavy is =%d",heavy);
	
	
}
