/* -*- c++ -*- */
/* 
 * Copyright 2014 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_CORTEXLAB_IEEE802_15_4_SPLITTER_H
#define INCLUDED_CORTEXLAB_IEEE802_15_4_SPLITTER_H

#include <cortexlab/api.h>
#include <gnuradio/sync_block.h>
#include <gnuradio/sync_interpolator.h>

namespace gr {
  namespace cortexlab {

    /*!
     * \brief <+description of block+>
     * \ingroup cortexlab
     *
     */
    class CORTEXLAB_API ieee802_15_4_splitter : virtual public sync_interpolator	//gr::sync_block
    {
     public:
      typedef boost::shared_ptr<ieee802_15_4_splitter> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of cortexlab::ieee802_15_4_splitter.
       *
       * To avoid accidental use of raw pointers, cortexlab::ieee802_15_4_splitter's
       * constructor is in a private implementation
       * class. cortexlab::ieee802_15_4_splitter::make is the public interface for
       * creating new instances.
       */
      static sptr make();
    };

  } // namespace cortexlab
} // namespace gr

#endif /* INCLUDED_CORTEXLAB_IEEE802_15_4_SPLITTER_H */

