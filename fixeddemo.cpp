// Usage Examples
//
// This shows you how to operate the filters
// fixed preceision
// the ADC data has 12 bits
// the number of taps is 1000 = 10 bits
// the coefficients have 12 bits
// 34 bits (!) in the accumulator which works because
// the gain of the filter is 1 and we get only a temporary
// overflow while we add up the coefficients.
//

// This is the only include you need
#include "Fir1fixed.h"

#include <sstream>
#include <iostream>
#include <iomanip>
#include <stdio.h>

float Fir1fixed::fir(float value)
{


	// resets the delay line to zero
	fir.reset ();
      
	// gets the number of taps
	int taps = fir.getTaps();

	printf("taps = %d\n",taps);


        short int value = fir.filter((short int)value);
        return (float)value);
	}

}
