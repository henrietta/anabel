/* 
	This file is part of Anabel

    Anabel is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    Anabel is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Anabel; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
#include <iostream>

namespace Anabel {
	namespace Exceptions {
		class TimeSeriesLocked {};
		class UnrecognizedTimeSeriesType {
			public:
				unsigned int type;
				UnrecognizedTimeSeriesType(unsigned int etype);
		};
		class InvalidRootDirectory {
			public:
				std::string reason;
				InvalidRootDirectory(std::string errreason);
		};
		class InvalidInvocation {
			public:
				std::string reason;
				InvalidInvocation(std::string errreason);
		};
	};
};
