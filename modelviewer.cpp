/*
 *  modelViewer.cpp
 *  modelViewer
 *
 *  Created by Colin Hunt.
 *  Copyright 2014 Hunt Enterprises. All rights reserved.
 *
 */

#include "MainUtility.h"

// Main routine.
int main(int argc, char **argv) {
    
    initializeGlutGlewModel(&argc, argv);
    
    loadDataIntoVertexArray();
    
    setDrawingFunc(drawModelDisplayList);
    
    prepareAndStartMainLoop();
    
    return 0;
}

