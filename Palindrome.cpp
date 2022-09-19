class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int rem,sum=0,temp;
		    temp=n;
		    while(n>0)
		    {
		        rem=n%10;
		        sum=sum*10+rem;
		        n=n/10;
		    }
		    if(temp==sum)
		        return "Yes";
		    else
		        return "No";
		       
		}
};
