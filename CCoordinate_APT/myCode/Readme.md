Implementation

a) Declare the class based on the UML diagram in the file CCoordinate.h.

b) Implement the constructor in the file CCoordinate.cpp. Print the address of the object using
the this Pointer as well as all attribute values.

c) Implement the destructor. Print the address of the destroyed object.

d) Implement the setCartesian() and getCartesian() operation. The setCartesian() operation
sets the attributes to the passed parameter values, the getCartesian() operation returns the
attributes using the parameter variables (call by reference). What happens if you use
references for the setCartesian()? What happens if you do not use references for
getCartesian?

e) Implement the add() function, which adds the passed parameter values to the attributes.
Compare this function with the setCartesian() operation. What do you notice?

f) Implement the getCylinder() operation using the formulas above. Include the library
<math.h> for the trigonometric functions.

g) Implement the getPolar() operation using the formulas above. Check the functionality of the
atan2 function compared to the atan function.

h) Implement the print operation. Use a switch case statement to print the correct coordinate
format based on the passed parameter.

i) Define 3 objects in the main.cpp file:
    CCoordinate c1(4,4,2);
    CCoordinate c2;
    CCoordinate c3 (-4);

j) Test the print operation.
    c1.print(CARTESIAN);
    c1.print(CYLINDER);
    c2.print(CYLINDER);
    c1.print(POLAR);
    c2.print(POLAR);
    c3.print(POLAR);

k) Check the results on correctness. Extend the code in such a way, that a warning is generated for all illegal parameter combinations and set the resulting calculated value to 0. Hint: check the provided formulas for critical values and missing definitions.

l) Test the add operation. Explain the generated messages from the constructor and destructor.
    c1.add(c3);
    c2.add(CCoordinate(1,2,3));
    c1.print(CARTESIAN);
    c2.print(CARTESIAN);