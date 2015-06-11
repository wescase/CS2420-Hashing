
// Hash Class
	// Properties
		// const MAX = 20; // max allowable size of ints coming in.
	// Methods
		// default constructor - no params - initialize each element of array to -999.
		// int getHashValue(int fromFile) - 
			// param: int value from file
			// return: the location of the element in the array
			// utilize the % mod oporatoer in the hash function
		// bool insert2Hash(int fromFile, location??)
			// Purpose: insert passed value into array, unless already present
				// if a key already exists cout << "Collision detected at location <location_colision_occured>, for the value <value_attempted_to_be_inserted>" << endl;
			// Parameters: int from the file
			// Returns: bool (pass or collision basically)
		// bool resolveCollision(int value, originalLocation)
			// Purpose: locate a new location in the array for an integer value
			// Parameters: int value, originalLocation
			// Returns: bool
		

// Driver.cpp
	// Read in a file that has one int on one line at a time
	