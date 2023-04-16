
To run the MARIE simulator and the datapath simulator, you must have a computer with Sun's Java Virtual 
Machine (JVM) installed.  This virtual machine is freely available.  There are two packages available 
for Java:

(1) JRE (Java runtime environment), which include the JVM; and 
(2) JDK (Java development kit), which includes the Java compiler.  

To run these simulators, you need only the JRE software.

On some machines (in particular, Windows machines), the MARIE machine simulator and accompanying 
datapath simulator may be run directly from their respective JAR files, assuming that you have 
the JVM installed.  Simply copy each JAR file to the folder of your choice and double click on it. 

Within Windows, your file associations must be set properly to do this.  If you double click on the
jar file and nothing happens or the file opens in a different application, you will need to set up
an association for this file type.  Note: Unpacking and running from a command prompt (as in Step 1 
below) may be necessary if there is a problem with your Windows file associations.

If you would rather run the software fom a command prompt (such as on a Unix machine), or if you 
want to look at the source code, use the following commands to unpack the JAR file once you have 
copied it to your computer.  To use the JAR command, you must have the JDK software installed.

1.  To unpack and run the MARIE simulator:

	jar xvf MarieSim.jar 	// Class files for both MARIE simulator and data path simulator
	java MarieSim1  	// Run the main simulator
	java MarieDP1 		// Run the datapath simulator

2.  To unpack and view the source code:
	
	jar xvf MarieSrc.jar 	// Source code (for MARIE simulator and data path simulator)

3.  To compile the source code:

	javac MarieSim1.java    // Compiling the source code requires the JDK



See the complete MarieGuide documentation (MarieGuide.doc) for more information.

Source code for examples 4.1, 4.2, and 4.3 from the book has been included for your convenience.
