//
// Created by brand on 8/28/2026.
//

#pragma once

namespace DX3D {
    class Base {
        public:
            Base();             // Constructor
            virtual ~Base();    // Destructor

        protected:

            // Rule of 5 (Concept):
            /*
             * Implementing 5 specific methods in a class:
             * 1. Destructor
             * 2. Copy constructor
             * 3. Move constructor
             * 4. Copy assignment operator
             * 5. Move assignment operator
             *
             */

            Base(const Base&) = delete;;
            Base(Base&&) = delete;
            Base& operator=(const Base&) = delete;
            Base& operator=(Base&&) = delete;
    };
}
