/**********************************************************************
 *                                                  
 *  PS3b: StringSound implementation and SFML audio output 
 **********************************************************************/

Name: Michael Chagnon

Hours to complete assignment : 12 hrs

/**********************************************************************
 *  Did you complete the whole assignment?
 *  Successfully or not? 
 *  Indicate which parts you think are working, and describe
 *    how you know that they're working.
 **********************************************************************/
I was able to implement my StringSound class properly. However, I was unable to implement
KSGuitarSim.cpp in the desired way. Instead I replicated the method used in SSLite.cpp


/**********************************************************************
 *  Did you attempt the extra credit parts? Which one(s)?
 *  Successfully or not?  
 **********************************************************************/
No

/**********************************************************************
 *  Did you implement exseptions to check your StringSound 
 *	implementation?
 *  Indicate yes or no, and explain how you did it.
 **********************************************************************/
Yes, I created an excpetion for the constructor that made it so StringSound couldn't
be initilized with a non-positive number for frequency. This is because frequency determines the
size of the CircularBuffer wnd arrays can't be <= 0.


/**********************************************************************
 *  Did you implement lambda expression?
 *  Indicate yes or no, and explain how you did it.
 **********************************************************************/
No


/**********************************************************************
 *  Did your code pass cpplint?
 *  Indicate yes or no, and explain how you did it.
 **********************************************************************/
Yes, I just ran lint on my code and fix the errors accordingly

/**********************************************************************
 *  List whatever help (if any) you received from TAs,
 *  classmates, or anyone else.
 **********************************************************************/
Went to Tutoring and a TA helped me figure out that in my CircularBuffer constructor
the size wasn't created dynamically, so I fixed that


/**********************************************************************
 *  Describe any serious problems you encountered.                    
 **********************************************************************/
NA

/**********************************************************************
 *  List any other comments here.                                     
 **********************************************************************/
 NA