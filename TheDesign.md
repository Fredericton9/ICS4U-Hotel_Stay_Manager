The class floor is made.
Under the class, there are two or more objects: each corresponding to different types of rooms in the hotel. There will be values according to each value of the room, such as a string
array for the occupants of the room, What type of room it would be, how much it would cost per night, and the duration of their stay in that room.

- Note that there should be two/three variants of rooms (it could from ocean-view/non-scenic or Luxury/First Class/Economic)
- If there are no rooms left in a certain floor, they should be moved to the next floor, and continuously moved until there is a room available.



There should be 3 functions, not including the main;

- Addition of Time Stayed; Allows the occupant to input how much extra time they would like to stay, calculate and output the additional cost, and
			   add it to their current cost total.
- Changing Time Stayed; if a customer decides to leave earlier than intended, they will need to input how many days they would like to change to,
			and we will alter the variable to recalculate for the cost at the end.
- Changing room type; If a customer is unsatisfactory with the type of room, then they can input a room they would like to change to, and we will reassign
		      them to that next available type of room, print out their new room number and new cost of stay.

*Note in all functions, the customer will need to input a 4-digit passcode generated already for each customer.*

In the main loop;

- For each customer checking in, the class floor is called and puts the customer in the room available on the particular floor;

- The main function will have a time counter; Every tick for the time counter is equivalent every day and sees if the customer have stayed for time they requested for.
