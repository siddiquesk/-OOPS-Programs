
/*

C++ Constructors - Theory Notes
1. Constructor Definition
Constructor ek special member function hai jo kisi class ke object create hone par automatically call hota hai.
Constructor ka naam class ke naam ke saath same hota hai.
Constructor ka koi return type nahi hota (na void).
Constructor ka use object ko initialize karne ke liye hota hai.

2. Types of Constructors
a. Default Constructor
Ek constructor jo bina kisi parameter ke hota hai ya jisme saare parameters ke default values hoti hain.
Iska kaam object ko default values se initialize karna hota hai.
b. Parameterized Constructor
Aisa constructor jo arguments accept karta hai aur object ko specific values ke saath initialize karta hai.
Iska use alag-alag objects ko different values dene ke liye hota hai.
c. Copy Constructor
Ek constructor jo ek object ko dusre object ke data ke saath initialize karta hai.
Default copy constructor shallow copy karta hai (sirf memory address copy hota hai).
User-defined copy constructor deep copy kar sakta hai (actual data copy hota hai).
d. Dynamic Constructor
Aisa constructor jo runtime par dynamic memory allocate karta hai (e.g., new operator ka use karke).
Ye tab useful hota hai jab object ke liye dynamic resources allocate karne ki zarurat ho.
e. Constructor Overloading
Ek hi class ke andar multiple constructors hona jo alag-alag parameters accept karte ho.
Ye alag-alag tareeke se object banane ki flexibility deta hai.

3. Features of Constructors
Automatic Call: Constructor object banate hi automatically call hota hai.
No Return Type: Constructor ka koi return type nahi hota.
Overloading: Ek class ke andar multiple constructors ho sakte hain, bas unka parameter list alag hona chahiye.
Initialization: Object ke data members ko initialize karna constructor ka main kaam hota hai.
Destructor Pair: Constructor ke saath destructor ka use hota hai jo object destroy hone par cleanup karta hai.

4. Key Points
Agar user-defined constructor nahi diya gaya to compiler ek default constructor provide karta hai.
Constructor ko manually call nahi kiya ja sakta; ye sirf object creation ke samay call hota hai.
Constructor inheritance nahi hota, lekin base class ka constructor derived class ke constructor ke andar call ho sakta hai.
Copy constructor tab call hota hai jab ek object dusre object se initialize kiya jata hai.
 */







