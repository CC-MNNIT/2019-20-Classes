# Java Class - 1 
## Initial Setup Instructions

- [Installing JDK + JRE](https://docs.oracle.com/javase/8/docs/technotes/guides/install/install_overview.html)

- [Installing Jetbrains](https://www.jetbrains.com/help/idea/install-and-set-up-product.html)

- [Setting Up Windows cmd For Java](https://introcs.cs.princeton.edu/java/15inout/windows-cmd.html)


## Resources

- [Head First Java](https://ia601308.us.archive.org/35/items/HeadFirstJava2ndEdition/Head-First-Java-2nd-edition.pdf): One of the best Java book for beginners.

- [Core Java Volume 1](http://www2.nsru.ac.th/tung/java_doc/Core%20Java%20Volume%20I-%20Fundamentals%209th%20Edition-%20Horstmann,%20Cay%20S.%20&%20Cornell,%20Gary_2013.pdf): Covers both basics and advanced topics in Java, Highly recommened for those who are already familiar with Java.

- [The Complete Java Reference](http://iiti.ac.in/people/~tanimad/JavaTheCompleteReference.pdf): Another great book covering basics of Java in crisp and concise manner.

- [Oracle Docs](https://docs.oracle.com/javase/tutorial/): Best resource for learning Java, all you have to learn is how to search the docs :P. Recommend for advanced users.

- [Java TPoint](https://www.javatpoint.com/): Great online resource for learning Java concepts.


## Java Basics and Useful Links

- Java is an object oriented, class-based, concurrent, secured

- Initiators:
 	James Gosling, Mike Sheridan, and Patrick Naughton

- Features of java:
    1. Write once run anywhere
    2. Multithreated
    3. Security
    4. Built in graphics
    5. Object Oriented language
    6. Support Multimedia
    7. Open product
    8. [Platform  independent](https://www.geeksforgeeks.org/java-platform-independent/)
    

- COMPILATION:
	- set path=C:\Program Files\Java\jdk1.6.0_23\bin

- Compile time
	- javac fileName.java
	- Class -> Compiler -> Bytecode

- Runtime
	- .classfile -> classloader -> bytecode verifier ->interpreter -> runtime -> hardware

-JDK
	- Compiler(javac), tools(javap, java) + JRE

- JRE
	- JVM + runtime environment
	- Provide set of software tools which are used for developing Java applications.
	- It is used to provide the runtime environment.
	- JRE implements JVM.
	- implementation of jvm therefore is also released by different other companies (openjdk, oraclejdk)

- JVM
	- can run anything compiled to bytecode. it is a vm.
	- jvm is system dependent.
	- Functions of JVM
		Loads code
		Verifies code
		Executes code
		Provides runtime environment
	
		therefore convert and run single line of bytecode.
		bytecode -> machine code -> run that line
	- [ How JVM Works](https://www.geeksforgeeks.org/jvm-works-jvm-architecture/)
	- [ JDK vs JRE vs JVM ](https://www.geeksforgeeks.org/differences-jdk-jre-jvm/)

- JIT
	- line by line, hence --> performance problem -- (solution needed) --> jit
	- Hepls java interpreter to run and execute code faster
	- refer this [link](https://www.geeksforgeeks.org/just-in-time-compiler/)

- Classes and Objects
	- refer the [ppt](Java_Class_1.pptx) for all the theory and examples
	- [this reference in Java](https://www.geeksforgeeks.org/this-reference-in-java/)
	- [instance vs static methods in java](https://www.geeksforgeeks.org/static-methods-vs-instance-methods-java/)
	- refer [this code](Shirt.java) for basic syntax and [this code](Dog.java) for Mutator Example








