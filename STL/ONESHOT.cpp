//stl is a short cut 
//1). vector
//v.size():for elements in  vector
//v.capacity():total size of vector ...size of vector will be in 2 ^n form..like 2,4,8,16,32..
//v.at(index):return the element at that index..
//v.front():return the first element of vector.
//v.back():return the last element
//v.pop_back():deletes the last element of vector
//v.push_back(data):add an element at end
//v.clear():deletes entire vector i.e size=0;
// another way to initialise a vector..
//vector<int> v(7,2):here 7 is size of vector and 2 is assigned to all blocks of vector
//make a copy of vector :vector<int> a(b):where a is new vector and b is original 




//2) deque: doubly ended queue 
// here we can push and pop from both ends
//#include<deque>
//deque<int> d;
//d.push_back(data):add from end
//d.push_front(data):add from front
//d.pop_back():deletes  last element 
//d.pop_front():deletes first element
//d.at(index):returns the element at that index..0 based index
//d.front():return first element
//d.back():return last element
//d.erase():it is of 2 types 1.d.erase(d.begin()+4) for single element
//2 d.erase(d.begin(v.begin(),v.begin()+5)):for a range to be deleted

//insert(iterator ,data):insert the value at that iterrator
//unique(v.begin(),v.end()):returns iterator with which we can erase it
//count(v.begin(),v.end(),value):counts 
//copy(InputIt first, InputIt last, OutputIt d_first);

//3)queue:
//#include<queue>
//queue<int> q;
//already done




//4)algorithms
//#include<algorithm>
//binary_search(v.begin(),v.end(),element to be found):will return 0 if not found else 1
//also if we want to return the position ,then lower_bound -v.begin();
//To count the occurence of number in sorted array ,,we can use lower bound and upper bound 
//lower_bound(v.begin(),v.end(),no to be counted); it returns the iterator which needs to be stored
//it returns iterator to first occurence
//upper_bound(v.begin(),v.end(),no to be counted);
//count=upper-lower;
//swap(a,b):interchanges the value 
//reverse(s.begin(),s.end()):takes the range
//sort(v.begin(),v.end()):sorts in ascending











































