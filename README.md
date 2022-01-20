# home_assignment

Enter your json data as the command line argument. And you will get the count of all the domains and subdomains.

eg : '{ "amazon.com": 23, "google.co.uk": 15, "google.com": 7, "amazon.co.uk": 9, "london.gov.uk": 4 }'

IMPORTANT POINT : Do not forget to enclose your json data with a single inverted comma(') on both ends. 


# Sample Input 
./a.out ' { "amazon.com": 23, "google.co.uk": 15, "google.com": 7, "amazon.co.uk": 9, "london.gov.uk": 4 } '

# Sample Output

amazon.co.uk = 9
amazon.com = 23
co.uk = 24
com = 30
google.co.uk = 15
google.com = 7
gov.uk = 4
london.gov.uk = 4
uk = 28
