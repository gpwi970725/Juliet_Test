/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_83.h
Label Definition File: CWE122_Heap_Based_Buffer_Overflow__sizeof.label.xml
Template File: sources-sink-83.tmpl.h
*/
/*
 * @description
 * CWE: 122 Heap Based Buffer Overflow
 * BadSource:  Initialize the source buffer using the size of a pointer
 * GoodSource: Initialize the source buffer using the size of the DataElementType
 * Sinks:
 *    BadSink : Print then free data
 * Flow Variant: 83 Data flow: data passed to class constructor and destructor by declaring the class object on the stack
 *
 * */

#include "std_testcase.h"

namespace CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_83
{

#ifndef OMITBAD

class CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_83_bad
{
public:
    CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_83_bad(int64_t * dataCopy);
    ~CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_83_bad();

private:
    int64_t * data;
};

#endif /* OMITBAD */

#ifndef OMITGOOD

class CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_83_goodG2B
{
public:
    CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_83_goodG2B(int64_t * dataCopy);
    ~CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_83_goodG2B();

private:
    int64_t * data;
};

#endif /* OMITGOOD */

}
