# How to Execute the File

g++ -o anyname prog1.cpp

# IOStream

\*\* The term Stream is intended to suggest that the characters
are generated, or consumed, sequentially over time.

** istream - cin or standard input
** ostream - cout or standard output
\*\* ostream - cerr, clog - standard error

**_ when we read from cin, data are read from the window
_** in which the program is executing, and when we write to cout, **_ cerr, or clog, the
_** output is written to the same window

## Operators

\*\* >>, <<, +, -, /

## Operands

** it can be numbers to be added or something to be
** printed on screen, for instance,
** std::cout<<"Enter a number:"<<std::endl; has operators "<<" and
** operands, cout and values to be printed on screen.

## Flushing the Buffer

** Writing endl has the effect of ending the current line and
** flushing the buffer associated with that device. Flushing the
** buffer ensures that all the output the
** program has generated so far is actually written to the output ** stream, rather than
** sitting in memory waiting to be written.
