#ifndef UMLCOLLABORATIONDIAGRAM_H
#define UMLCOLLABORATIONDIAGRAM_H

#include "UmlBaseCollaborationDiagram.h"
//Added by qt3to4:
#include "misc/mystr.h"

// This class manages 'collaboration diagrams', notes that the class 'UmlDiagram'
// is a mother class of all the diagrams, allowing to generalize their
// management
// You can modify it as you want (except the constructor)

class UmlCollaborationDiagram : public UmlBaseCollaborationDiagram
{
public:
    UmlCollaborationDiagram(void * id, const WrapperStr & n)
        : UmlBaseCollaborationDiagram(id, n) {};
};

#endif
