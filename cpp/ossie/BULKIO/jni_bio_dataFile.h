#ifndef __JNI_BIO_DATAFILE_H__
#define __JNI_BIO_DATAFILE_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <BULKIO/bio_dataFile.h>
#include <ossie/BULKIO/jni_bio_runtimeStats.h>
#include <ossie/BULKIO/jni_bio_updateSRI.h>

namespace BULKIO {
  namespace jni {
    class dataFilePOA : public virtual omnijni::Servant, public virtual POA_BULKIO::dataFile, public virtual BULKIO::jni::ProvidesPortStatisticsProviderPOA, public virtual BULKIO::jni::updateSRIPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void pushPacket (const char* URL, const BULKIO::PrecisionUTCTime& T, CORBA::Boolean EOS, const char* streamID);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      static jclass cls_;
      static JavaVM* jvm_;
      static jmethodID mid_[1];
    };

    class dataFile
    {
      public:
      static void fromJObject (BULKIO::dataFile_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataFile_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      dataFile();
      ~dataFile();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class dataFileHolder
    {
      public:
      static void fromJObject (BULKIO::dataFile_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataFile_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, BULKIO::dataFile_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      dataFileHolder();
      ~dataFileHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (BULKIO::dataFile_out out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::dataFile::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::dataFile_ptr in, JNIEnv* env)
{
  return BULKIO::jni::dataFile::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::dataFileRef> (JNIEnv* env)
{
  return BULKIO::jni::dataFile::getJClass(env);
}


#endif // __JNI_BIO_DATAFILE_H__