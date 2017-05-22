#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Graph.h"

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        std::cout << "Add files!" << std::endl;
        return 0;
    }
    Graph firstGraph(argv[1]);
    Graph secondGraph(argv[2]);
    Isomorphism iso(argv[1], argv[2]);
    
    permutationTab = new int[firstGraph.v];
		for(int i=0; i<firstGraph.v; i++)
			permutationTab[i]=i;

        
        
	if(iso.isItIsomorphic())
    {
        std::cout << "Izomorficzne\n";
        for(int i=0; i<iso.firstGraph.v; i++)
            std::cout << i << " --> " << permutationTab[i] << "\n";
    }

    else
        std::cout << "Nieizomorficzne\n";

	delete[] permutationTab;



    return 0;
}
