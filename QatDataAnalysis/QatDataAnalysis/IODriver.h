//---------------------------------------------------------------------------//
// !!                                                                     !! //
//                                                                           //
//  Copyright (C) 2016 Joe Boudreau                                          //
//                                                                           //
//  This file is part of the QAT Toolkit for computational science           //
//                                                                           //
//  QAT is free software: you can redistribute it and/or modify              //
//  it under the terms of the GNU Lesser General Public License as           //
//  published by the Free Software Foundation, either version 3 of           //
//  the License, or (at your option) any later version.                      //
//                                                                           //
//  QAT is distributed in the hope that it will be useful,                   //
//  but WITHOUT ANY WARRANTY; without even the implied warranty of           //
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            //
//  GNU Lesser General Public License for more details.                      //
//                                                                           //
//  You should have received a copy of the GNU Lesser General Public         //
//  License along with QAT.  If not, see <http://www.gnu.org/licenses/>.     //
//                                                                           //
//---------------------------------------------------------------------------//

#ifndef _IODriver_h_
#define _IODriver_h_
class HistogramManager;
#include <string>
class IODriver {

 public:

  // Constructor:
  IODriver();

  // Destructor:
  virtual ~IODriver ();

  // Creates a NEW Histogram manager.
  virtual HistogramManager *newManager(const std::string & filename) const = 0;

  // OpenManager:
  virtual const HistogramManager *openManager(const std::string & filename) const = 0;

  // Writes the Histograms out.
  virtual void close (const HistogramManager *mgr) const = 0;
  
  // Closes the file:
  virtual void write (HistogramManager *mgr) const = 0;


};

#endif
