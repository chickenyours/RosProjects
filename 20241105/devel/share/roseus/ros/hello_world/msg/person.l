;; Auto-generated. Do not edit!


(when (boundp 'hello_world::person)
  (if (not (find-package "HELLO_WORLD"))
    (make-package "HELLO_WORLD"))
  (shadow 'person (find-package "HELLO_WORLD")))
(unless (find-package "HELLO_WORLD::PERSON")
  (make-package "HELLO_WORLD::PERSON"))

(in-package "ROS")
;;//! \htmlinclude person.msg.html


(defclass hello_world::person
  :super ros::object
  :slots (_a _b ))

(defmethod hello_world::person
  (:init
   (&key
    ((:a __a) 0)
    ((:b __b) 0.0)
    )
   (send-super :init)
   (setq _a (round __a))
   (setq _b (float __b))
   self)
  (:a
   (&optional __a)
   (if __a (setq _a __a)) _a)
  (:b
   (&optional __b)
   (if __b (setq _b __b)) _b)
  (:serialization-length
   ()
   (+
    ;; int32 _a
    4
    ;; float32 _b
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _a
       (write-long _a s)
     ;; float32 _b
       (sys::poke _b (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _a
     (setq _a (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float32 _b
     (setq _b (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get hello_world::person :md5sum-) "c42adccf478b67fc840a040c9ca6483b")
(setf (get hello_world::person :datatype-) "hello_world/person")
(setf (get hello_world::person :definition-)
      "int32 a
float32 b
")



(provide :hello_world/person "c42adccf478b67fc840a040c9ca6483b")


