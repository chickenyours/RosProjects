;; Auto-generated. Do not edit!


(when (boundp 'server_client::AddInts)
  (if (not (find-package "SERVER_CLIENT"))
    (make-package "SERVER_CLIENT"))
  (shadow 'AddInts (find-package "SERVER_CLIENT")))
(unless (find-package "SERVER_CLIENT::ADDINTS")
  (make-package "SERVER_CLIENT::ADDINTS"))
(unless (find-package "SERVER_CLIENT::ADDINTSREQUEST")
  (make-package "SERVER_CLIENT::ADDINTSREQUEST"))
(unless (find-package "SERVER_CLIENT::ADDINTSRESPONSE")
  (make-package "SERVER_CLIENT::ADDINTSRESPONSE"))

(in-package "ROS")





(defclass server_client::AddIntsRequest
  :super ros::object
  :slots (_a _b ))

(defmethod server_client::AddIntsRequest
  (:init
   (&key
    ((:a __a) 0)
    ((:b __b) 0)
    )
   (send-super :init)
   (setq _a (round __a))
   (setq _b (round __b))
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
    ;; int32 _b
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _a
       (write-long _a s)
     ;; int32 _b
       (write-long _b s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _a
     (setq _a (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _b
     (setq _b (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass server_client::AddIntsResponse
  :super ros::object
  :slots (_sum ))

(defmethod server_client::AddIntsResponse
  (:init
   (&key
    ((:sum __sum) 0)
    )
   (send-super :init)
   (setq _sum (round __sum))
   self)
  (:sum
   (&optional __sum)
   (if __sum (setq _sum __sum)) _sum)
  (:serialization-length
   ()
   (+
    ;; int32 _sum
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _sum
       (write-long _sum s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _sum
     (setq _sum (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass server_client::AddInts
  :super ros::object
  :slots ())

(setf (get server_client::AddInts :md5sum-) "f0b6d69ea10b0cf210cb349d58d59e8f")
(setf (get server_client::AddInts :datatype-) "server_client/AddInts")
(setf (get server_client::AddInts :request) server_client::AddIntsRequest)
(setf (get server_client::AddInts :response) server_client::AddIntsResponse)

(defmethod server_client::AddIntsRequest
  (:response () (instance server_client::AddIntsResponse :init)))

(setf (get server_client::AddIntsRequest :md5sum-) "f0b6d69ea10b0cf210cb349d58d59e8f")
(setf (get server_client::AddIntsRequest :datatype-) "server_client/AddIntsRequest")
(setf (get server_client::AddIntsRequest :definition-)
      "int32 a
int32 b
---
int32 sum
")

(setf (get server_client::AddIntsResponse :md5sum-) "f0b6d69ea10b0cf210cb349d58d59e8f")
(setf (get server_client::AddIntsResponse :datatype-) "server_client/AddIntsResponse")
(setf (get server_client::AddIntsResponse :definition-)
      "int32 a
int32 b
---
int32 sum
")



(provide :server_client/AddInts "f0b6d69ea10b0cf210cb349d58d59e8f")


