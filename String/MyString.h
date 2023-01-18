int mystrlen(char *s1)
{
	int i=0;
	while(*s1++!='\0')
	i++;
	return(i);
}
void mystrrev(char *s1)
{
	int i,j,t;
	i=j=0;
	while(s1[j]!='\0')
	j++;
	j--;
	while(i<j)
	{
		t=s1[j];
		s1[j]=s1[i];
		s1[i]=t;
		i++; j--;
	}
}
void mystrcpy(char *s2, char *s1)
{
	
	do
	{
		*s2++=*s1;
	}while(*s1++!='\0');
}
int mystrcmp(char *s1, char *s2)
{
	
	while(*s1==*s2)
	{
		if(*s1=='\0' && *s2=='\0')
		return(0);
		s1++; s2++;
	}
	
	if((int)*s1>(int)*s2)
	return(1);
	else if((int)*s2>(int)*s1)
	return(-1);
}
void mystrcat(char *s1, char *s2)
{
	while(*s1!='\0')
	s1++;
	do
	{
		*s1++=*s2;
	}while(*s2++!='\0');
}
void mystrtoupper(char *s1)
{
	while(*s1!='\0')
	{
		if(*s1>96 && *s1<123)
		{
			*s1=*s1-32;
		}
		s1++;
	}
}
void mystrtolower(char *s1)
{
	while(*s1!='\0')
	{
		if(*s1>64 && *s1<91)
		{
			*s1=*s1+32;
		}
		s1++;
	}
}
