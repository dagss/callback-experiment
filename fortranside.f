      subroutine loopcll(n, callback)
      implicit none
      external callback
      integer i, n
      
      do i = 1, n
         call callback(i)
      enddo
      end subroutine
