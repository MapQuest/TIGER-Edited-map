This software is distributed under the following MIT License

Copyright (c) 2010  MapQuest

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.



This is a stylesheet for use with OpenStreetMap data to highlight ways that
have not been modified since they were initially imported from TIGER data. It
is a recreation of a project that was originally created by Matt Amos.

There are a couple of caveats:
* You need to run osm2pgsql with the -x flag and the extended attributes
  uncommented in the .style file.
* Roads that have had their nodes moved, but the way remains unchanged, will
  still show up as unedited.

See http://wiki.openstreetmap.org/wiki/TIGER_Edited_Map for more.