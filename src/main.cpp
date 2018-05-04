/**
 * @file tests.cpp
 * @version 1.0
 * @date May, 01.
 * @author Daniel Guerra and Oziel Alves
 * @title Vector tests
 * @brief Tests of the TAD-Vector.
 */

#include "vector.hpp"

int main( ){

/*----------------------------- Test vectors --------------------------------*/
	
	sc::vector< std::string > v1;
	sc::vector< int > v2( 10 );

/*------------------- Testing push_front and push_back ----------------------/
	
	std::cout << "Testing push()\n\n";

	sc::vector< int > V3;
	V3.push_front(3);
	V3.push_front(2);
	V3.push_front(1);
	
	V3.push_back(4);
	V3.push_back(5);
	V3.push_back(6);
	
	std::cout << "Expected: [ 1 2 3 4 5 6 ]\n";
	V3.print(); // Out: [ 1 2 3 4 5 6 ]

/*--------------------- Testing pop_front and pop_back ----------------------/
	
	std::cout << "\nTesting pop()\n\n";
	V3.pop_front();
	V3.pop_front();
	V3.pop_back();

	std::cout << "\nExpected: [ 3 4 5 ]\n";
	V3.print(); // Out: [ 3 4 5 ]

/*------- Testing at(), operator [](), operator ==(), operator =!() ---------/
	
	sc::vector< int > V4;

	V4.push_back(9);
	V4.push_back(8);
	V4.push_back(7);
	V4.push_back(6);
	V4.push_back(5);
	
	std::cout << "\nTesting Operator '[]'\n\n"; 
	std::cout << "Pos = 0, Element expected: 9 <<<<"<< V4[0] << "\n";
	std::cout << "Pos = 4, Element expected: 5 <<<<"<< V4[4] << "\n";

	sc::vector< int > V5(V4);

	std::cout << "\nTesting at()\n\n"; 
	std::cout << "Pos = 1, Element expected: 8 <<<<"<< V4.at(1) << "\n";

	/*V4.at(2) = 0;
	V4.at(0) = 0;
	V4.at(4) = 0;

	std::cout << "Expected: [ 0 8 0 6 0 ]\n";
	V4.print(); // Out [ 0 8 0 6 0 ]/

	std::cout << "\nTesting Operator == and =!\n\n";

	std::cout << "Vector one:\n";
	V4.print();
	std::cout << "Vector two:\n";
	V5.print();
	
	assert( V4 != V5 ); // Execution continues if works
	if( V4 == V5 ) 
		std::cout << "The vectors are iqual\n\n";
	else 
		std::cout << "The vectos are different\n\n";
	
/*------------------ Testing Assign(), clear() and empty() ------------------/

	std::cout << "\nTesting Assign ( T )\n\n";

	std::cout << "\nSample Vector:\n";
	V5.print();

	V5.assign(1);
	std::cout << "\nAssigned Vector:\n";
	V5.print();

	std::cout << "\nLets now clear the whole Vector\n";
	V5.clear();
	
	std::cout << "\nClean Vector:\n";
	V5.print();

	if( V5.empty() == true )
		std::cout << "The vector is empty!\n";

/*------------------------- Testing constructors ----------------------------*/

	/* String Vector */

	/*sc::vector< std::string > hi = {'how', 'is', 'it', 'going'};
	sc::vector< std::string > hello(hi);
	sc::vector< std::string > hey = hi;

	assert( hi == hey );
	assert( hey == hello );
	std::cout << "\nConstructors are working!\n";

	hi.print();
	hello.print();
	hey.print();/

	
}
*/

	    // Testando metodo emtpy()
	    {
	        assert( v1.empty() == true );
	        assert( v2.empty() == true );
	    }

	    // Testando push_back e pop_back
	    {
	    	std::cout << "\n\t>>>testando push_back e pop_back (vet com capacity definido)\n";
	        for( auto i(0) ; i < 10 ; ++i )
	            v1.push_back( i+1 );

	        std::cout << "v1 antes pop_back: \n";
	        v1.print();

	        std::cout << "poping back v1... ";
	        while( not v1.empty() )
	            v1.pop_back();
	        std::cout << std::endl;

	        std::cout << "v1 após pop_back: \n";
	        v1.print();
	    }

	    // Testanto vetor com string
	    {
	        std::cout << "\n\t>>>testando vetor com string (vet com capacity NAO definido)\n";
	        ls::vector< std::string > ss;

	        ss.print();
	        ss.push_back( "one" );
	        ss.print();
	        ss.push_back( "two" );
	        ss.print();
	        ss.push_back( "three" );
	        ss.print();
	        ss.push_back( "four" );
	        ss.print();
	        ss.push_back( "five" );
	        ss.print();
	    }

	    // Testando push_front e pop_front
	    {
	        std::cout << "\n\t>>>testando push_front e pop_front (vet com capacity NAO definido)\n";

	        ls::vector<int> v3;
	        v3.push_front(8);
	        v3.push_front(9);
	        v3.push_front(0);
	        v3.push_back(1);
	        v3.push_front(5);

	        v3.print(); // esperado: 5 0 9 8 1

	        v3.pop_front();
	        v3.pop_front();

	        v3.print(); // esperado: 9 8 1

	    }   

	    // Testando assign(T) and clear()
	    {
	        std::cout << "\n\t>>>testando assign(T) and clear()\n";

	        ls::vector<int> v;
	        v.push_front(8);
	        v.push_front(9);
	        v.push_front(0);
	        v.push_back(1);
	        v.push_front(5);

	        v.print(); // esperado: 5 0 9 8 1

	        v.assign(4);

	        v.print(); // esperado: 4 4 4 4 4
	        
	        v.clear();

	        v.print(); // esperado: []

	    }

	    // Testando at() and operator[]() and shrink_to_fit()
	    {
	        std::cout << "\n\t>>>testando at() and operator[]()\n";

	        ls::vector<std::string> v;
	        v.push_back("me");
	        v.push_back("you");
	        v.push_back("he");
	        v.push_back("she");

	        v.print();
	        v[1] = "change1";
	        v.at(2) = "change2";
	        std::cout << "Elemento na posição 0 = " << v[0] << std::endl; 
	        std::cout << "Elemento na posição 1 = " << v.at(1) << std::endl; 
	        std::cout << "Elemento na posição 2 = " << v[2] << std::endl; 
	        std::cout << "Elemento na posição 3 = " << v.at(3) << std::endl; 
	        //OK std::cout << "Elemento na posição 4 = " << v.at(4) << std::endl; 

	        std::cout << "\n\t>>>testando shrink_to_fit()\n";
	        v.shrink_to_fit();
	        std::cout << "vetor removeu as posições não usadas... agora capacity = len\n";
	        v.print();
	    }

	    // Testando operator== e operator[]
	    {
	        std::cout << "\n\t>>>testando operator== and operator[]()\n";
	        std::cout << "\n\t>>>inicializando v2 com initializer_list\n";

	        ls::vector<float> v1;
	        ls::vector<float> v2 = { 0.1, 2.3, 0.8 };

	        v1.push_back(0.1);
	        v1.push_back(2.3);
	        v1.push_back(0.8);

	        std::cout << "vetor 1: ";
	        v1.print();
	        std::cout << "vetor 2: ";
	        v2.print();

	        assert( v1 == v2 );
	        if( v1 == v2 )
	            std::cout << "vetor 1 e 2 são iguais.\n\n";
	        else
	            std::cout << "vetor 1 e 2 são diferentes.\n\n";

	        v2[1] = 4.1;
	        std::cout << "vetor 1: ";
	        v1.print();
	        std::cout << "vetor 2: ";
	        v2.print();

	        assert( v1 != v2 );
	        if( v1 == v2 )
	            std::cout << "vetor 1 e 2 são iguais.\n\n";
	        else
	            std::cout << "vetor 1 e 2 são diferentes.\n\n";

	        v1[1] = 4.1;
	        v1.push_back(2.0);

	        std::cout << "vetor 1: ";
	        v1.print();
	        std::cout << "vetor 2: ";
	        v2.print();

	        assert( v1 != v2 );
	        if( v1 == v2 )
	            std::cout << "vetor 1 e 2 são iguais.\n\n";
	        else
	            std::cout << "vetor 1 e 2 são diferentes.\n\n";
	    }

	    //Testando constructors
	    {
	        ls::vector<char> A = { 'a', 'b', 'c' };
	        ls::vector<char> B(A);
	        ls::vector<char> C = A;

	        assert( A == B );
	        assert( A == C );

	        A.print();
	        B.print();
	        C.print();
	    }
	}