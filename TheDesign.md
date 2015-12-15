The class floors are made.
Under each class, there are two or more objects: each corresponding to a different type of rooms in the hotel. There will be values according to each variable for the room, such as a string
array for the occupants in the room, type of room it would be, cost per night, and the duration of their stay.

- There should be two/three different type of rooms (it could from ocean-view/non-scenic or Luxury/First Class/Economic)
- If there are no rooms left on a certain floor, they will be moved to the next floor and so on until there is a room available



There will be 3 functions, excluding the main;

- Addition of Time Stayed; Allows the occupant to input how much extra time they would like to stay, calculate and output the additional cost, and
			   add it to their current cost total.
- Changing Time Stayed; if a customer decides to leave earlier than intended, they will need to input how many days they would like to change to,
			and we will alter the variable to recalculate for the cost at the end.
- Changing room type; If a customer is unsatisfactory with the type of room, then they can input a room they would like to change to, and we will reassign
		      them to that next available type of room, print out their new room number and new cost of stay.

*Note in all functions, the customer will need to input a 4-digit passcode generated already for each customer.*

In the main loop;

- For each customer checking in, the class floor is called and puts the customer in the room available on the particular floor;

- The main function will have a time counter; Every tick for the time counter is equivalent to each day and sees if the customer has stayed for time that they've booked for.
