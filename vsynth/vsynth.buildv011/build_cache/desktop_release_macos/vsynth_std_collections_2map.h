
#ifndef MX2_VSYNTH_STD_COLLECTIONS_2MAP_H
#define MX2_VSYNTH_STD_COLLECTIONS_2MAP_H

#include <bbmonkey.h>
#include "../../../../../../monkey2/modules/std/std.buildv011/desktop_release_macos/std_collections_2map.h"

// ***** External *****

#include "../../../../../../monkey2/modules/monkey/monkey.buildv011/desktop_release_macos/monkey_types.h"

// ***** Internal *****

struct t_std_collections_Map_1TbbInt_2i_Node;
struct t_std_collections_Map_1TbbInt_2i_Iterator;
struct t_std_collections_Map_1TbbInt_2i_KeyIterator;
struct t_std_collections_Map_1TbbInt_2i_MapKeys;
struct t_std_collections_Map_1TbbInt_2i_ValueIterator;
struct t_std_collections_Map_1TbbInt_2i_MapValues;
struct t_std_collections_Map_1TbbInt_2i;

struct t_std_collections_Map_1TbbInt_2i_Node : public bbObject{

  const char *typeName()const{return "t_std_collections_Map_1TbbInt_2i_Node";}

  bbInt m__0key{};
  bbInt m__0value{};
  bbInt m__0color{};
  bbGCVar<t_std_collections_Map_1TbbInt_2i_Node> m__0left{};
  bbGCVar<t_std_collections_Map_1TbbInt_2i_Node> m__0right{};
  bbGCVar<t_std_collections_Map_1TbbInt_2i_Node> m__0parent{};

  void gcMark();

  t_std_collections_Map_1TbbInt_2i_Node(bbInt l_key,bbInt l_value,bbInt l_color,t_std_collections_Map_1TbbInt_2i_Node* l_parent);

  bbInt m_Value();
  t_std_collections_Map_1TbbInt_2i_Node* m_PrevNode();
  t_std_collections_Map_1TbbInt_2i_Node* m_NextNode();
  bbInt m_Key();
  bbInt m_Count(bbInt l_n);
  t_std_collections_Map_1TbbInt_2i_Node* m_Copy(t_std_collections_Map_1TbbInt_2i_Node* l_parent);

  t_std_collections_Map_1TbbInt_2i_Node(){
  }
};

struct t_std_collections_Map_1TbbInt_2i_Iterator{
  const char *typeName()const{return "t_std_collections_Map_1TbbInt_2i_Iterator";}

  bbGCVar<t_std_collections_Map_1TbbInt_2i_Node> m__0node{};

  t_std_collections_Map_1TbbInt_2i_Iterator(t_std_collections_Map_1TbbInt_2i_Node* l_node);

  bbBool m_Valid();
  t_std_collections_Map_1TbbInt_2i_Node* m_Current();
  void m_Bump();

  t_std_collections_Map_1TbbInt_2i_Iterator(){
  }

  t_std_collections_Map_1TbbInt_2i_Iterator(bbNullCtor_t){
  }
};

int bbCompare(const t_std_collections_Map_1TbbInt_2i_Iterator&x,const t_std_collections_Map_1TbbInt_2i_Iterator&y);

void bbGCMark(const t_std_collections_Map_1TbbInt_2i_Iterator&);

struct t_std_collections_Map_1TbbInt_2i_KeyIterator{
  const char *typeName()const{return "t_std_collections_Map_1TbbInt_2i_KeyIterator";}

  bbGCVar<t_std_collections_Map_1TbbInt_2i_Node> m__0node{};

  t_std_collections_Map_1TbbInt_2i_KeyIterator(t_std_collections_Map_1TbbInt_2i_Node* l_node);

  bbBool m_Valid();
  bbInt m_Current();
  void m_Bump();

  t_std_collections_Map_1TbbInt_2i_KeyIterator(){
  }

  t_std_collections_Map_1TbbInt_2i_KeyIterator(bbNullCtor_t){
  }
};

int bbCompare(const t_std_collections_Map_1TbbInt_2i_KeyIterator&x,const t_std_collections_Map_1TbbInt_2i_KeyIterator&y);

void bbGCMark(const t_std_collections_Map_1TbbInt_2i_KeyIterator&);

struct t_std_collections_Map_1TbbInt_2i_MapKeys{
  const char *typeName()const{return "t_std_collections_Map_1TbbInt_2i_MapKeys";}

  bbGCVar<t_std_collections_Map_1TbbInt_2i> m__0map{};

  t_std_collections_Map_1TbbInt_2i_MapKeys(t_std_collections_Map_1TbbInt_2i* l_map);

  t_std_collections_Map_1TbbInt_2i_KeyIterator m_All();

  t_std_collections_Map_1TbbInt_2i_MapKeys(){
  }

  t_std_collections_Map_1TbbInt_2i_MapKeys(bbNullCtor_t){
  }
};

int bbCompare(const t_std_collections_Map_1TbbInt_2i_MapKeys&x,const t_std_collections_Map_1TbbInt_2i_MapKeys&y);

void bbGCMark(const t_std_collections_Map_1TbbInt_2i_MapKeys&);

struct t_std_collections_Map_1TbbInt_2i_ValueIterator{
  const char *typeName()const{return "t_std_collections_Map_1TbbInt_2i_ValueIterator";}

  bbGCVar<t_std_collections_Map_1TbbInt_2i_Node> m__0node{};

  t_std_collections_Map_1TbbInt_2i_ValueIterator(t_std_collections_Map_1TbbInt_2i_Node* l_node);

  bbBool m_Valid();
  bbInt m_Current();
  void m_Bump();

  t_std_collections_Map_1TbbInt_2i_ValueIterator(){
  }

  t_std_collections_Map_1TbbInt_2i_ValueIterator(bbNullCtor_t){
  }
};

int bbCompare(const t_std_collections_Map_1TbbInt_2i_ValueIterator&x,const t_std_collections_Map_1TbbInt_2i_ValueIterator&y);

void bbGCMark(const t_std_collections_Map_1TbbInt_2i_ValueIterator&);

struct t_std_collections_Map_1TbbInt_2i_MapValues{
  const char *typeName()const{return "t_std_collections_Map_1TbbInt_2i_MapValues";}

  bbGCVar<t_std_collections_Map_1TbbInt_2i> m__0map{};

  t_std_collections_Map_1TbbInt_2i_MapValues(t_std_collections_Map_1TbbInt_2i* l_map);

  t_std_collections_Map_1TbbInt_2i_ValueIterator m_All();

  t_std_collections_Map_1TbbInt_2i_MapValues(){
  }

  t_std_collections_Map_1TbbInt_2i_MapValues(bbNullCtor_t){
  }
};

int bbCompare(const t_std_collections_Map_1TbbInt_2i_MapValues&x,const t_std_collections_Map_1TbbInt_2i_MapValues&y);

void bbGCMark(const t_std_collections_Map_1TbbInt_2i_MapValues&);

struct t_std_collections_Map_1TbbInt_2i : public bbObject{

  const char *typeName()const{return "t_std_collections_Map_1TbbInt_2i";}

  bbGCVar<t_std_collections_Map_1TbbInt_2i_Node> m__0root{};

  void gcMark();

  t_std_collections_Map_1TbbInt_2i(t_std_collections_Map_1TbbInt_2i_Node* l_root);
  t_std_collections_Map_1TbbInt_2i();

  void m__idxeq(bbInt l_key,bbInt l_value);
  bbInt m__idx(bbInt l_key);
  t_std_collections_Map_1TbbInt_2i_MapValues m_Values();
  bbBool m_Update(bbInt l_key,bbInt l_value);
  bbBool m_Set(bbInt l_key,bbInt l_value);
  void m_RotateRight(t_std_collections_Map_1TbbInt_2i_Node* l_node);
  void m_RotateLeft(t_std_collections_Map_1TbbInt_2i_Node* l_node);
  void m_RemoveNode(t_std_collections_Map_1TbbInt_2i_Node* l_node);
  bbBool m_Remove(bbInt l_key);
  t_std_collections_Map_1TbbInt_2i_Node* m_LastNode();
  t_std_collections_Map_1TbbInt_2i_MapKeys m_Keys();
  void m_InsertFixup(t_std_collections_Map_1TbbInt_2i_Node* l_node);
  bbInt m_Get(bbInt l_key);
  t_std_collections_Map_1TbbInt_2i_Node* m_FirstNode();
  t_std_collections_Map_1TbbInt_2i_Node* m_FindNode(bbInt l_key);
  bbBool m_Empty();
  void m_DeleteFixup(t_std_collections_Map_1TbbInt_2i_Node* l_node,t_std_collections_Map_1TbbInt_2i_Node* l_parent);
  bbInt m_Count();
  t_std_collections_Map_1TbbInt_2i* m_Copy();
  bbBool m_Contains(bbInt l_key);
  void m_Clear();
  t_std_collections_Map_1TbbInt_2i_Iterator m_All();
  bbBool m_Add(bbInt l_key,bbInt l_value);
};

#endif
