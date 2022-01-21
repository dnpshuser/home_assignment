# home_assignment

Enter your json data as the command line argument. And you will get the count of all the domains and subdomains.

eg : '{ "amazon.com": 23, "google.co.uk": 15, "google.com": 7, "amazon.co.uk": 9, "london.gov.uk": 4 }'



# Sample Input 
./a.out '{"amazon.com": 23, "google.co.uk": 15, "google.com": 7, "amazon.co.uk": 9, "london.gov.uk": 4}'

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

# IMPORTANT POINTS 

* Do not forget to enclose your json data with a single inverted comma(') on both ends. 
 
* Your command line argument should be in the form of a single JSON object. i.e. it should be enclosed with a pair of curly braces {}, starting from the begining and ending at the end.

* You can get incorrect or unformatted results if you pass arryas or nested objects.

* Please strict to this structure of the command line argument to get the correct output
  ./a.out '{"subdomain.and.domains.separated.by.dot.com": 100, "example.com": 50, "github.com": 74}'
# each url should always be followed up by a number after colon(:)


In case you are facing any issue with this application. Feel free to reach out to me at sk9632070@gmail.com
